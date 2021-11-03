#pragma once

#include "../../../JObject.hpp"


namespace android::icu::util
{
	class RangeValueIterator_Element : public JObject
	{
	public:
		// Fields
		jint limit();
		jint start();
		jint value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangeValueIterator_Element(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangeValueIterator_Element(QAndroidJniObject obj);
		
		// Constructors
		RangeValueIterator_Element();
		
		// Methods
	};
} // namespace android::icu::util

