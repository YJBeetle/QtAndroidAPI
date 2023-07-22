#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class PathEffect : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathEffect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PathEffect(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PathEffect();
		
		// Methods
	};
} // namespace android::graphics

