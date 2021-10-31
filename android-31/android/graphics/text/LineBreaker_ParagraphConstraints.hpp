#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::graphics::text
{
	class LineBreaker_ParagraphConstraints : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreaker_ParagraphConstraints(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_ParagraphConstraints(QJniObject obj);
		
		// Constructors
		LineBreaker_ParagraphConstraints();
		
		// Methods
		jfloat getDefaultTabStop();
		jfloat getFirstWidth();
		jint getFirstWidthLineCount();
		jfloatArray getTabStops();
		jfloat getWidth();
		void setIndent(jfloat arg0, jint arg1);
		void setTabStops(jfloatArray arg0, jfloat arg1);
		void setWidth(jfloat arg0);
	};
} // namespace android::graphics::text

