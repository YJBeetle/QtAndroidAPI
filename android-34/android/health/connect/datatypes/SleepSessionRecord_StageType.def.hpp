#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class SleepSessionRecord_StageType : public JObject
	{
	public:
		// Fields
		static jint STAGE_TYPE_AWAKE();
		static jint STAGE_TYPE_AWAKE_IN_BED();
		static jint STAGE_TYPE_AWAKE_OUT_OF_BED();
		static jint STAGE_TYPE_SLEEPING();
		static jint STAGE_TYPE_SLEEPING_DEEP();
		static jint STAGE_TYPE_SLEEPING_LIGHT();
		static jint STAGE_TYPE_SLEEPING_REM();
		static jint STAGE_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit SleepSessionRecord_StageType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SleepSessionRecord_StageType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

