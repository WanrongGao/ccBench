/********************************************************************
 * BenchIT - Performance Measurement for Scientific Applications
 * Contact: developer@benchit.org
 *
 * $Id: JBI.c 1 2009-09-11 12:26:19Z william $
 * $URL: svn+ssh://molka@rupert.zih.tu-dresden.de/svn-base/benchit-root/BenchITv6/jbi/jni/JBI.c $
 * For license details see COPYING in the package base directory
 *******************************************************************/
/* C-implementation of the native methods in 
 * ${BENCHITROOT}/jbi/JBI.java
 *******************************************************************/

#include "JBI.h"
#include <sys/time.h>
#include <time.h>
/*!
 * @return The elapsed time since 01.01.1970 in seconds.
 */
JNIEXPORT jdouble JNICALL Java_JBI_get_1time_1of_1day (JNIEnv *env, jobject obj)
{

	struct timeval time;
	struct timezone tz;
	
	if (gettimeofday(&time,&tz)==0) return (double) time.tv_sec + (double) time.tv_usec * 1.0e-6;

	return (double) 0; // in case of an error
}

