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
		static __JniBaseClass emptyDoubleSpliterator();
		static __JniBaseClass emptyIntSpliterator();
		static __JniBaseClass emptyLongSpliterator();
		static __JniBaseClass emptySpliterator();
		static __JniBaseClass iterator(__JniBaseClass arg0);
		static __JniBaseClass spliterator(jobjectArray arg0, jint arg1);
		static __JniBaseClass spliterator(__JniBaseClass arg0, jint arg1);
		static __JniBaseClass spliterator(__JniBaseClass arg0, jlong arg1, jint arg2);
		static __JniBaseClass spliterator(jobjectArray arg0, jint arg1, jint arg2, jint arg3);
		static __JniBaseClass spliterator(jdoubleArray arg0, jint arg1);
		static __JniBaseClass spliterator(jdoubleArray arg0, jint arg1, jint arg2, jint arg3);
		static __JniBaseClass spliterator(jintArray arg0, jint arg1);
		static __JniBaseClass spliterator(jintArray arg0, jint arg1, jint arg2, jint arg3);
		static __JniBaseClass spliterator(jlongArray arg0, jint arg1);
		static __JniBaseClass spliterator(jlongArray arg0, jint arg1, jint arg2, jint arg3);
		static __JniBaseClass spliteratorUnknownSize(__JniBaseClass arg0, jint arg1);
	};
} // namespace java::util

