#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class OvulationTestRecord_OvulationTestResult : public JObject
	{
	public:
		// Fields
		static jint RESULT_HIGH();
		static jint RESULT_INCONCLUSIVE();
		static jint RESULT_NEGATIVE();
		static jint RESULT_POSITIVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit OvulationTestRecord_OvulationTestResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OvulationTestRecord_OvulationTestResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

