#include "../../../JString.hpp"
#include "./FileChannel_MapMode.hpp"

namespace java::nio::channels
{
	// Fields
	java::nio::channels::FileChannel_MapMode FileChannel_MapMode::PRIVATE()
	{
		return getStaticObjectField(
			"java.nio.channels.FileChannel$MapMode",
			"PRIVATE",
			"Ljava/nio/channels/FileChannel$MapMode;"
		);
	}
	java::nio::channels::FileChannel_MapMode FileChannel_MapMode::READ_ONLY()
	{
		return getStaticObjectField(
			"java.nio.channels.FileChannel$MapMode",
			"READ_ONLY",
			"Ljava/nio/channels/FileChannel$MapMode;"
		);
	}
	java::nio::channels::FileChannel_MapMode FileChannel_MapMode::READ_WRITE()
	{
		return getStaticObjectField(
			"java.nio.channels.FileChannel$MapMode",
			"READ_WRITE",
			"Ljava/nio/channels/FileChannel$MapMode;"
		);
	}
	
	// Constructors
	
	// Methods
	JString FileChannel_MapMode::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::channels

