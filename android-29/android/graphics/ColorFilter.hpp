#pragma once

#include "../../JObject.hpp"


namespace android::graphics
{
	class ColorFilter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorFilter(QAndroidJniObject obj);
		
		// Constructors
		ColorFilter();
		
		// Methods
	};
} // namespace android::graphics

