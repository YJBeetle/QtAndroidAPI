#include "./ByteOrder.hpp"

namespace java::nio
{
	// Fields
	QAndroidJniObject ByteOrder::BIG_ENDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.ByteOrder",
			"BIG_ENDIAN",
			"Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject ByteOrder::LITTLE_ENDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.ByteOrder",
			"LITTLE_ENDIAN",
			"Ljava/nio/ByteOrder;"
		);
	}
	
	// QAndroidJniObject forward
	ByteOrder::ByteOrder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ByteOrder::nativeOrder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ByteOrder",
			"nativeOrder",
			"()Ljava/nio/ByteOrder;"
		);
	}
	jstring ByteOrder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

