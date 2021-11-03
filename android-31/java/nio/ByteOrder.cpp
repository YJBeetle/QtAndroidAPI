#include "../../JString.hpp"
#include "./ByteOrder.hpp"

namespace java::nio
{
	// Fields
	java::nio::ByteOrder ByteOrder::BIG_ENDIAN()
	{
		return getStaticObjectField(
			"java.nio.ByteOrder",
			"BIG_ENDIAN",
			"Ljava/nio/ByteOrder;"
		);
	}
	java::nio::ByteOrder ByteOrder::LITTLE_ENDIAN()
	{
		return getStaticObjectField(
			"java.nio.ByteOrder",
			"LITTLE_ENDIAN",
			"Ljava/nio/ByteOrder;"
		);
	}
	
	// QJniObject forward
	ByteOrder::ByteOrder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::ByteOrder ByteOrder::nativeOrder()
	{
		return callStaticObjectMethod(
			"java.nio.ByteOrder",
			"nativeOrder",
			"()Ljava/nio/ByteOrder;"
		);
	}
	JString ByteOrder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

