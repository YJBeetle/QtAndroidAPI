#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class ColorFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorFilter(QJniObject obj);
		
		// Constructors
		ColorFilter();
		
		// Methods
	};
} // namespace android::graphics

