#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ObjectStreamField : public __JniBaseClass
	{
	public:
		// Fields
		
		ObjectStreamField(QAndroidJniObject obj);
		// Constructors
		ObjectStreamField(jstring arg0, jclass arg1);
		ObjectStreamField(jstring arg0, jclass arg1, jboolean arg2);
		ObjectStreamField() = default;
		
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

