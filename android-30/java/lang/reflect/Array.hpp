#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JClass;
class JObject;

namespace java::lang::reflect
{
	class Array : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Array(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Array(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject get(JObject arg0, jint arg1);
		static jboolean getBoolean(JObject arg0, jint arg1);
		static jbyte getByte(JObject arg0, jint arg1);
		static jchar getChar(JObject arg0, jint arg1);
		static jdouble getDouble(JObject arg0, jint arg1);
		static jfloat getFloat(JObject arg0, jint arg1);
		static jint getInt(JObject arg0, jint arg1);
		static jint getLength(JObject arg0);
		static jlong getLong(JObject arg0, jint arg1);
		static jshort getShort(JObject arg0, jint arg1);
		static JObject newInstance(JClass arg0, JIntArray arg1);
		static JObject newInstance(JClass arg0, jint arg1);
		static void set(JObject arg0, jint arg1, JObject arg2);
		static void setBoolean(JObject arg0, jint arg1, jboolean arg2);
		static void setByte(JObject arg0, jint arg1, jbyte arg2);
		static void setChar(JObject arg0, jint arg1, jchar arg2);
		static void setDouble(JObject arg0, jint arg1, jdouble arg2);
		static void setFloat(JObject arg0, jint arg1, jfloat arg2);
		static void setInt(JObject arg0, jint arg1, jint arg2);
		static void setLong(JObject arg0, jint arg1, jlong arg2);
		static void setShort(JObject arg0, jint arg1, jshort arg2);
	};
} // namespace java::lang::reflect

