#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class ValueIterator_Element : public __JniBaseClass
	{
	public:
		// Fields
		jint integer();
		jobject value();
		
		// QJniObject forward
		template<typename ...Ts> explicit ValueIterator_Element(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ValueIterator_Element(QJniObject obj);
		
		// Constructors
		ValueIterator_Element();
		
		// Methods
	};
} // namespace android::icu::util

