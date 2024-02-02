#pragma once

#include "./InstantRecord.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class OvulationTestRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OvulationTestRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		OvulationTestRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getResult() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

