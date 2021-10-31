#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::awt::font
{
	class NumericShaper_Range;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::awt::font
{
	class NumericShaper : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_RANGES();
		static jint ARABIC();
		static jint BENGALI();
		static jint DEVANAGARI();
		static jint EASTERN_ARABIC();
		static jint ETHIOPIC();
		static jint EUROPEAN();
		static jint GUJARATI();
		static jint GURMUKHI();
		static jint KANNADA();
		static jint KHMER();
		static jint LAO();
		static jint MALAYALAM();
		static jint MONGOLIAN();
		static jint MYANMAR();
		static jint ORIYA();
		static jint TAMIL();
		static jint TELUGU();
		static jint THAI();
		static jint TIBETAN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumericShaper(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NumericShaper(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::awt::font::NumericShaper getContextualShaper(jint arg0);
		static java::awt::font::NumericShaper getContextualShaper(__JniBaseClass arg0);
		static java::awt::font::NumericShaper getContextualShaper(jint arg0, jint arg1);
		static java::awt::font::NumericShaper getContextualShaper(__JniBaseClass arg0, java::awt::font::NumericShaper_Range arg1);
		static java::awt::font::NumericShaper getShaper(jint arg0);
		static java::awt::font::NumericShaper getShaper(java::awt::font::NumericShaper_Range arg0);
		jboolean equals(jobject arg0);
		__JniBaseClass getRangeSet();
		jint getRanges();
		jint hashCode();
		jboolean isContextual();
		void shape(jcharArray arg0, jint arg1, jint arg2);
		void shape(jcharArray arg0, jint arg1, jint arg2, jint arg3);
		void shape(jcharArray arg0, jint arg1, jint arg2, java::awt::font::NumericShaper_Range arg3);
		jstring toString();
	};
} // namespace java::awt::font

