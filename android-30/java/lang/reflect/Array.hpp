#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::lang::reflect
{
	class Array : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Array(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Array(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jobject get(jobject arg0, jint arg1);
		static jboolean getBoolean(jobject arg0, jint arg1);
		static jbyte getByte(jobject arg0, jint arg1);
		static jchar getChar(jobject arg0, jint arg1);
		static jdouble getDouble(jobject arg0, jint arg1);
		static jfloat getFloat(jobject arg0, jint arg1);
		static jint getInt(jobject arg0, jint arg1);
		static jint getLength(jobject arg0);
		static jlong getLong(jobject arg0, jint arg1);
		static jshort getShort(jobject arg0, jint arg1);
		static jobject newInstance(jclass arg0, jintArray arg1);
		static jobject newInstance(jclass arg0, jint arg1);
		static void set(jobject arg0, jint arg1, jobject arg2);
		static void setBoolean(jobject arg0, jint arg1, jboolean arg2);
		static void setByte(jobject arg0, jint arg1, jbyte arg2);
		static void setChar(jobject arg0, jint arg1, jchar arg2);
		static void setDouble(jobject arg0, jint arg1, jdouble arg2);
		static void setFloat(jobject arg0, jint arg1, jfloat arg2);
		static void setInt(jobject arg0, jint arg1, jint arg2);
		static void setLong(jobject arg0, jint arg1, jlong arg2);
		static void setShort(jobject arg0, jint arg1, jshort arg2);
	};
} // namespace java::lang::reflect

