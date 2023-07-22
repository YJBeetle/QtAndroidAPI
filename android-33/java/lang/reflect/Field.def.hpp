#pragma once

#include "./AccessibleObject.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Field(const char *className, const char *sig, Ts...agv) : java::lang::reflect::AccessibleObject(className, sig, std::forward<Ts>(agv)...) {}
		Field(QJniObject obj) : java::lang::reflect::AccessibleObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject accessFlags() const;
		jboolean equals(JObject arg0) const;
		JObject get(JObject arg0) const;
		JObject getAnnotatedType() const;
		JObject getAnnotation(JClass arg0) const;
		JArray getAnnotationsByType(JClass arg0) const;
		jboolean getBoolean(JObject arg0) const;
		jbyte getByte(JObject arg0) const;
		jchar getChar(JObject arg0) const;
		JArray getDeclaredAnnotations() const;
		JClass getDeclaringClass() const;
		jdouble getDouble(JObject arg0) const;
		jfloat getFloat(JObject arg0) const;
		JObject getGenericType() const;
		jint getInt(JObject arg0) const;
		jlong getLong(JObject arg0) const;
		jint getModifiers() const;
		JString getName() const;
		jshort getShort(JObject arg0) const;
		JClass getType() const;
		jint hashCode() const;
		jboolean isEnumConstant() const;
		jboolean isSynthetic() const;
		void set(JObject arg0, JObject arg1) const;
		void setAccessible(jboolean arg0) const;
		void setBoolean(JObject arg0, jboolean arg1) const;
		void setByte(JObject arg0, jbyte arg1) const;
		void setChar(JObject arg0, jchar arg1) const;
		void setDouble(JObject arg0, jdouble arg1) const;
		void setFloat(JObject arg0, jfloat arg1) const;
		void setInt(JObject arg0, jint arg1) const;
		void setLong(JObject arg0, jlong arg1) const;
		void setShort(JObject arg0, jshort arg1) const;
		JString toGenericString() const;
		JString toString() const;
	};
} // namespace java::lang::reflect

