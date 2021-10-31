#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class RangeValueIterator_Element : public __JniBaseClass
	{
	public:
		// Fields
		jint limit();
		jint start();
		jint value();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangeValueIterator_Element(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RangeValueIterator_Element(QJniObject obj);
		
		// Constructors
		RangeValueIterator_Element();
		
		// Methods
	};
} // namespace android::icu::util

