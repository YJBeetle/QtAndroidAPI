#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}

namespace java::io
{
	class StreamTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		static jint TT_EOF();
		static jint TT_EOL();
		static jint TT_NUMBER();
		static jint TT_WORD();
		jdouble nval();
		jstring sval();
		jint ttype();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamTokenizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StreamTokenizer(QAndroidJniObject obj);
		
		// Constructors
		StreamTokenizer(java::io::InputStream arg0);
		StreamTokenizer(java::io::Reader arg0);
		
		// Methods
		void commentChar(jint arg0);
		void eolIsSignificant(jboolean arg0);
		jint lineno();
		void lowerCaseMode(jboolean arg0);
		jint nextToken();
		void ordinaryChar(jint arg0);
		void ordinaryChars(jint arg0, jint arg1);
		void parseNumbers();
		void pushBack();
		void quoteChar(jint arg0);
		void resetSyntax();
		void slashSlashComments(jboolean arg0);
		void slashStarComments(jboolean arg0);
		jstring toString();
		void whitespaceChars(jint arg0, jint arg1);
		void wordChars(jint arg0, jint arg1);
	};
} // namespace java::io

