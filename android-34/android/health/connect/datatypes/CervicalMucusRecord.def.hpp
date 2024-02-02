#pragma once

#include "./InstantRecord.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class CervicalMucusRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CervicalMucusRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		CervicalMucusRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getAppearance() const;
		jint getSensation() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

