#pragma once

#include "../../../JObject.hpp"
#include "./AccessibleObject.hpp"

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
		Field(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		JObject getAnnotatedType();
		JObject getAnnotation(jclass arg0);
		jarray getAnnotationsByType(jclass arg0);
		jboolean getBoolean(jobject arg0);
		jbyte getByte(jobject arg0);
		jchar getChar(jobject arg0);
		jarray getDeclaredAnnotations();
		jclass getDeclaringClass();
		jdouble getDouble(jobject arg0);
		jfloat getFloat(jobject arg0);
		JObject getGenericType();
		jint getInt(jobject arg0);
		jlong getLong(jobject arg0);
		jint getModifiers();
		jstring getName();
		jshort getShort(jobject arg0);
		jclass getType();
		jint hashCode();
		jboolean isEnumConstant();
		jboolean isSynthetic();
		void set(jobject arg0, jobject arg1);
		void setAccessible(jboolean arg0);
		void setBoolean(jobject arg0, jboolean arg1);
		void setByte(jobject arg0, jbyte arg1);
		void setChar(jobject arg0, jchar arg1);
		void setDouble(jobject arg0, jdouble arg1);
		void setFloat(jobject arg0, jfloat arg1);
		void setInt(jobject arg0, jint arg1);
		void setLong(jobject arg0, jlong arg1);
		void setShort(jobject arg0, jshort arg1);
		jstring toGenericString();
		jstring toString();
	};
} // namespace java::lang::reflect

