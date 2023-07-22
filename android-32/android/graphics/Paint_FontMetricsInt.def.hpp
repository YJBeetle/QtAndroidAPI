#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::graphics
{
	class Paint_FontMetricsInt : public JObject
	{
	public:
		// Fields
		jint ascent();
		jint bottom();
		jint descent();
		jint leading();
		jint top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_FontMetricsInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paint_FontMetricsInt(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Paint_FontMetricsInt();
		
		// Methods
		JString toString() const;
	};
} // namespace android::graphics

