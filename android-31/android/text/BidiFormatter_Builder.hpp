#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class BidiFormatter;
}
namespace java::util
{
	class Locale;
}

namespace android::text
{
	class BidiFormatter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BidiFormatter_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BidiFormatter_Builder(QJniObject obj);
		
		// Constructors
		BidiFormatter_Builder();
		BidiFormatter_Builder(jboolean arg0);
		BidiFormatter_Builder(java::util::Locale arg0);
		
		// Methods
		android::text::BidiFormatter build();
		android::text::BidiFormatter_Builder setTextDirectionHeuristic(__JniBaseClass arg0);
		android::text::BidiFormatter_Builder stereoReset(jboolean arg0);
	};
} // namespace android::text

