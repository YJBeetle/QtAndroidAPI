#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class CervicalMucusRecord_CervicalMucusSensation : public JObject
	{
	public:
		// Fields
		static jint SENSATION_HEAVY();
		static jint SENSATION_LIGHT();
		static jint SENSATION_MEDIUM();
		static jint SENSATION_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit CervicalMucusRecord_CervicalMucusSensation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CervicalMucusRecord_CervicalMucusSensation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

