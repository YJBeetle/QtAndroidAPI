#pragma once

#include "./EventLogTags_Description.def.hpp"
#include "../../java/io/BufferedReader.def.hpp"
#include "../../JString.hpp"
#include "./EventLogTags.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline EventLogTags::EventLogTags()
		: JObject(
			"android.util.EventLogTags",
			"()V"
		) {}
	inline EventLogTags::EventLogTags(java::io::BufferedReader arg0)
		: JObject(
			"android.util.EventLogTags",
			"(Ljava/io/BufferedReader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::util::EventLogTags_Description EventLogTags::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Landroid/util/EventLogTags$Description;",
			arg0
		);
	}
	inline android::util::EventLogTags_Description EventLogTags::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/util/EventLogTags$Description;",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

// Base class headers

