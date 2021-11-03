#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class PorterDuff : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PorterDuff(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuff(QJniObject obj);
		
		// Constructors
		PorterDuff();
		
		// Methods
	};
} // namespace android::graphics

