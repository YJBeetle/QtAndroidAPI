#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class MenstruationFlowRecord_MenstruationFlowType : public JObject
	{
	public:
		// Fields
		static jint FLOW_HEAVY();
		static jint FLOW_LIGHT();
		static jint FLOW_MEDIUM();
		static jint FLOW_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MenstruationFlowRecord_MenstruationFlowType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MenstruationFlowRecord_MenstruationFlowType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

