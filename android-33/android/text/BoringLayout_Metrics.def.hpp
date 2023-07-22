#pragma once

#include "../graphics/Paint_FontMetricsInt.def.hpp"

class JString;

namespace android::text
{
	class BoringLayout_Metrics : public android::graphics::Paint_FontMetricsInt
	{
	public:
		// Fields
		jint width();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BoringLayout_Metrics(const char *className, const char *sig, Ts...agv) : android::graphics::Paint_FontMetricsInt(className, sig, std::forward<Ts>(agv)...) {}
		BoringLayout_Metrics(QAndroidJniObject obj) : android::graphics::Paint_FontMetricsInt(obj) {}
		
		// Constructors
		BoringLayout_Metrics();
		
		// Methods
		JString toString() const;
	};
} // namespace android::text

