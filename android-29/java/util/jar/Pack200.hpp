#pragma once

#ifndef JAVA_UTIL_JAR_PACK200
#define JAVA_UTIL_JAR_PACK200

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::jar
{
	class Pack200 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newPacker();
		static QAndroidJniObject newUnpacker();
	};
} // namespace __jni_impl::java::util::jar


namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void Pack200::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Pack200",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Pack200::newPacker()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.Pack200",
			"newPacker",
			"()Ljava/util/jar/Pack200$Packer;");
	}
	QAndroidJniObject Pack200::newUnpacker()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.Pack200",
			"newUnpacker",
			"()Ljava/util/jar/Pack200$Unpacker;");
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class Pack200 : public __jni_impl::java::util::jar::Pack200
	{
	public:
		Pack200(QAndroidJniObject obj) { __thiz = obj; }
		Pack200()
		{
			__constructor();
		}
	};
} // namespace java::util::jar

#endif // JAVA_UTIL_JAR_PACK200

