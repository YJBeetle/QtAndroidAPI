#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::pdf
{
	class RenderParams : public JObject
	{
	public:
		// Fields
		static jint FLAG_RENDER_HIGHLIGHT_ANNOTATIONS();
		static jint FLAG_RENDER_TEXT_ANNOTATIONS();
		static jint RENDER_MODE_FOR_DISPLAY();
		static jint RENDER_MODE_FOR_PRINT();
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getRenderFlags() const;
		jint getRenderMode() const;
	};
} // namespace android::graphics::pdf

