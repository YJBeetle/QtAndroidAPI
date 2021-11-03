#pragma once

#include "../../../JObject.hpp"

class JFloatArray;

namespace android::graphics::text
{
	class LineBreaker_ParagraphConstraints : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreaker_ParagraphConstraints(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_ParagraphConstraints(QJniObject obj);
		
		// Constructors
		LineBreaker_ParagraphConstraints();
		
		// Methods
		jfloat getDefaultTabStop() const;
		jfloat getFirstWidth() const;
		jint getFirstWidthLineCount() const;
		JFloatArray getTabStops() const;
		jfloat getWidth() const;
		void setIndent(jfloat arg0, jint arg1) const;
		void setTabStops(JFloatArray arg0, jfloat arg1) const;
		void setWidth(jfloat arg0) const;
	};
} // namespace android::graphics::text

