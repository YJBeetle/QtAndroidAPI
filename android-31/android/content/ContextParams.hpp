#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class AttributionSource;
}

namespace android::content
{
	class ContextParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContextParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContextParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getAttributionTag();
		android::content::AttributionSource getNextAttributionSource();
	};
} // namespace android::content

