#pragma once

#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StructPollfd.def.hpp"

namespace android::system
{
	// Fields
	inline jshort StructPollfd::events()
	{
		return getField<jshort>(
			"events"
		);
	}
	inline java::io::FileDescriptor StructPollfd::fd()
	{
		return getObjectField(
			"fd",
			"Ljava/io/FileDescriptor;"
		);
	}
	inline jshort StructPollfd::revents()
	{
		return getField<jshort>(
			"revents"
		);
	}
	inline JObject StructPollfd::userData()
	{
		return getObjectField(
			"userData",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	inline StructPollfd::StructPollfd()
		: JObject(
			"android.system.StructPollfd",
			"()V"
		) {}
	
	// Methods
	inline JString StructPollfd::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers

