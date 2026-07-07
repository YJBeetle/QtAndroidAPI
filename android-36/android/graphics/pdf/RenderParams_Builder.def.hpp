#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::pdf
{
	class RenderParams;
}

namespace android::graphics::pdf
{
	class RenderParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RenderParams_Builder(jint arg0);
		
		// Methods
		android::graphics::pdf::RenderParams build() const;
		android::graphics::pdf::RenderParams_Builder setRenderFlags(jint arg0) const;
		android::graphics::pdf::RenderParams_Builder setRenderFlags(jint arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf

