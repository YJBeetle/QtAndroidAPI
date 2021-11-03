#pragma once

#include "./AccessibleObject.hpp"

class JByteArray;
class JArray;
class JClass;
class JObject;
class JString;
namespace java::lang::reflect
{
	class AccessibleObject;
}

namespace java::lang::reflect
{
	class Field : public java::lang::reflect::AccessibleObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Field(const char *className, const char *sig, Ts...agv) : java::lang::reflect::AccessibleObject(className, sig, std::forward<Ts>(agv)...) {}
		Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject get(JObject arg0);
		JObject getAnnotatedType();
		JObject getAnnotation(JClass arg0);
		JArray getAnnotationsByType(JClass arg0);
		jboolean getBoolean(JObject arg0);
		jbyte getByte(JObject arg0);
		jchar getChar(JObject arg0);
		JArray getDeclaredAnnotations();
		JClass getDeclaringClass();
		jdouble getDouble(JObject arg0);
		jfloat getFloat(JObject arg0);
		JObject getGenericType();
		jint getInt(JObject arg0);
		jlong getLong(JObject arg0);
		jint getModifiers();
		JString getName();
		jshort getShort(JObject arg0);
		JClass getType();
		jint hashCode();
		jboolean isEnumConstant();
		jboolean isSynthetic();
		void set(JObject arg0, JObject arg1);
		void setAccessible(jboolean arg0);
		void setBoolean(JObject arg0, jboolean arg1);
		void setByte(JObject arg0, jbyte arg1);
		void setChar(JObject arg0, jchar arg1);
		void setDouble(JObject arg0, jdouble arg1);
		void setFloat(JObject arg0, jfloat arg1);
		void setInt(JObject arg0, jint arg1);
		void setLong(JObject arg0, jlong arg1);
		void setShort(JObject arg0, jshort arg1);
		JString toGenericString();
		JString toString();
	};
} // namespace java::lang::reflect

