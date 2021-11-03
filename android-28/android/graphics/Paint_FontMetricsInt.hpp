#pragma once

#include "../../JObject.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_FontMetricsInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paint_FontMetricsInt(QJniObject obj);
		
		// Constructors
		Paint_FontMetricsInt();
		
		// Methods
		jstring toString();
	};
} // namespace android::graphics

