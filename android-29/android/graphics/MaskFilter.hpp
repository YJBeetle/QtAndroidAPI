#pragma once

#include "../../JObject.hpp"


namespace android::graphics
{
	class MaskFilter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MaskFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MaskFilter(QAndroidJniObject obj);
		
		// Constructors
		MaskFilter();
		
		// Methods
	};
} // namespace android::graphics

