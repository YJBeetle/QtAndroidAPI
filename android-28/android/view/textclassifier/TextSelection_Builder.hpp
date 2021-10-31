#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::textclassifier
{
	class TextSelection;
}

namespace android::view::textclassifier
{
	class TextSelection_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextSelection_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection_Builder(QJniObject obj);
		
		// Constructors
		TextSelection_Builder(jint arg0, jint arg1);
		
		// Methods
		android::view::textclassifier::TextSelection build();
		android::view::textclassifier::TextSelection_Builder setEntityType(jstring arg0, jfloat arg1);
		android::view::textclassifier::TextSelection_Builder setId(jstring arg0);
	};
} // namespace android::view::textclassifier

