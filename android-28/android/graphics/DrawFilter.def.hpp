#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class DrawFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrawFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrawFilter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DrawFilter();
		
		// Methods
	};
} // namespace android::graphics

