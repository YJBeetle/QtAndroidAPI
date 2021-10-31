#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spliterators(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject emptyDoubleSpliterator();
		static QAndroidJniObject emptyIntSpliterator();
		static QAndroidJniObject emptyLongSpliterator();
		static QAndroidJniObject emptySpliterator();
		static QAndroidJniObject iterator(__JniBaseClass arg0);
		static QAndroidJniObject spliterator(jobjectArray arg0, jint arg1);
		static QAndroidJniObject spliterator(__JniBaseClass arg0, jint arg1);
		static QAndroidJniObject spliterator(__JniBaseClass arg0, jlong arg1, jint arg2);
		static QAndroidJniObject spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliterator(jdoubleArray arg0, jint arg1);
		static QAndroidJniObject spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliterator(jintArray arg0, jint arg1);
		static QAndroidJniObject spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliterator(jlongArray arg0, jint arg1);
		static QAndroidJniObject spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject spliteratorUnknownSize(__JniBaseClass arg0, jint arg1);
	};
} // namespace java::util

