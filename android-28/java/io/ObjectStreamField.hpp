#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class StringBuilder;
}
namespace java::lang::reflect
{
	class Field;
}

namespace java::io
{
	class ObjectStreamField : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectStreamField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamField(QJniObject obj);
		
		// Constructors
		ObjectStreamField(jstring arg0, jclass arg1);
		ObjectStreamField(jstring arg0, jclass arg1, jboolean arg2);
		
		// Methods
		jint compareTo(jobject arg0);
		jstring getName();
		jint getOffset();
		jclass getType();
		jchar getTypeCode();
		jstring getTypeString();
		jboolean isPrimitive();
		jboolean isUnshared();
		jstring toString();
	};
} // namespace java::io

