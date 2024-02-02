#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class CervicalMucusRecord_CervicalMucusAppearance : public JObject
	{
	public:
		// Fields
		static jint APPEARANCE_CREAMY();
		static jint APPEARANCE_DRY();
		static jint APPEARANCE_EGG_WHITE();
		static jint APPEARANCE_STICKY();
		static jint APPEARANCE_UNKNOWN();
		static jint APPEARANCE_UNUSUAL();
		static jint APPEARANCE_WATERY();
		
		// QJniObject forward
		template<typename ...Ts> explicit CervicalMucusRecord_CervicalMucusAppearance(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CervicalMucusRecord_CervicalMucusAppearance(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

