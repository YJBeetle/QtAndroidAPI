#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Paint_FontMetrics;
}
class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Paint_FontMetricsInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paint_FontMetricsInt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Paint_FontMetricsInt();
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		void set(android::graphics::Paint_FontMetrics arg0) const;
		void set(android::graphics::Paint_FontMetricsInt arg0) const;
		JString toString() const;
	};
} // namespace android::graphics

