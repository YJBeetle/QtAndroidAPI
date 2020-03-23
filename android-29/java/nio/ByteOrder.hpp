#pragma once

#ifndef JAVA_NIO_BYTEORDER
#define JAVA_NIO_BYTEORDER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio
{
	class ByteOrder : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BIG_ENDIAN();
		static QAndroidJniObject LITTLE_ENDIAN();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject nativeOrder();
	};
} // namespace __jni_impl::java::nio


namespace __jni_impl::java::nio
{
	// Fields
	QAndroidJniObject ByteOrder::BIG_ENDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.ByteOrder",
			"BIG_ENDIAN",
			"Ljava/nio/ByteOrder;");
	}
	QAndroidJniObject ByteOrder::LITTLE_ENDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.ByteOrder",
			"LITTLE_ENDIAN",
			"Ljava/nio/ByteOrder;");
	}
	
	// Constructors
	void ByteOrder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.ByteOrder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ByteOrder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ByteOrder::nativeOrder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ByteOrder",
			"nativeOrder",
			"()Ljava/nio/ByteOrder;");
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class ByteOrder : public __jni_impl::java::nio::ByteOrder
	{
	public:
		ByteOrder(QAndroidJniObject obj) { __thiz = obj; }
		ByteOrder()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_BYTEORDER

