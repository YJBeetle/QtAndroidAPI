#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class SexualActivityRecord_SexualActivityProtectionUsed : public JObject
	{
	public:
		// Fields
		static jint PROTECTION_USED_PROTECTED();
		static jint PROTECTION_USED_UNKNOWN();
		static jint PROTECTION_USED_UNPROTECTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit SexualActivityRecord_SexualActivityProtectionUsed(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SexualActivityRecord_SexualActivityProtectionUsed(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

