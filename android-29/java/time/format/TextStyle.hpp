#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::time::format
{
	class TextStyle : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::format::TextStyle FULL();
		static java::time::format::TextStyle FULL_STANDALONE();
		static java::time::format::TextStyle NARROW();
		static java::time::format::TextStyle NARROW_STANDALONE();
		static java::time::format::TextStyle SHORT();
		static java::time::format::TextStyle SHORT_STANDALONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::TextStyle valueOf(JString arg0);
		static JArray values();
		java::time::format::TextStyle asNormal();
		java::time::format::TextStyle asStandalone();
		jboolean isStandalone();
	};
} // namespace java::time::format

