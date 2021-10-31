#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::wifi::rtt
{
	class CivicLocationKeys : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADDITIONAL_CODE();
		static jint APT();
		static jint BOROUGH();
		static jint BRANCH_ROAD_NAME();
		static jint BUILDING();
		static jint CITY();
		static jint COUNTY();
		static jint DESK();
		static jint FLOOR();
		static jint GROUP_OF_STREETS();
		static jint HNO();
		static jint HNS();
		static jint LANGUAGE();
		static jint LMK();
		static jint LOC();
		static jint NAM();
		static jint NEIGHBORHOOD();
		static jint PCN();
		static jint POD();
		static jint POSTAL_CODE();
		static jint PO_BOX();
		static jint PRD();
		static jint PRIMARY_ROAD_NAME();
		static jint ROAD_SECTION();
		static jint ROOM();
		static jint SCRIPT();
		static jint STATE();
		static jint STREET_NAME_POST_MODIFIER();
		static jint STREET_NAME_PRE_MODIFIER();
		static jint STS();
		static jint SUBBRANCH_ROAD_NAME();
		static jint TYPE_OF_PLACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CivicLocationKeys(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CivicLocationKeys(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi::rtt

