#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Enum : public __JniBaseClass
	{
	public:
		// Fields
		
		Enum(QAndroidJniObject obj);
		// Constructors
		Enum() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jclass arg0, jstring arg1);
		jint compareTo(java::lang::Enum arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jboolean equals(jobject arg0);
		jclass getDeclaringClass();
		jint hashCode();
		jstring name();
		jint ordinal();
		jstring toString();
	};
} // namespace java::lang

