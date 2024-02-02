#pragma once

#include "./InstantRecord.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class SexualActivityRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SexualActivityRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		SexualActivityRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getProtectionUsed() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

