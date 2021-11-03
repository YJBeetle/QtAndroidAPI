#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}
class JString;

namespace java::io
{
	class StreamTokenizer : public JObject
	{
	public:
		// Fields
		static jint TT_EOF();
		static jint TT_EOL();
		static jint TT_NUMBER();
		static jint TT_WORD();
		jdouble nval();
		JString sval();
		jint ttype();
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamTokenizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamTokenizer(QJniObject obj);
		
		// Constructors
		StreamTokenizer(java::io::InputStream arg0);
		StreamTokenizer(java::io::Reader arg0);
		
		// Methods
		void commentChar(jint arg0) const;
		void eolIsSignificant(jboolean arg0) const;
		jint lineno() const;
		void lowerCaseMode(jboolean arg0) const;
		jint nextToken() const;
		void ordinaryChar(jint arg0) const;
		void ordinaryChars(jint arg0, jint arg1) const;
		void parseNumbers() const;
		void pushBack() const;
		void quoteChar(jint arg0) const;
		void resetSyntax() const;
		void slashSlashComments(jboolean arg0) const;
		void slashStarComments(jboolean arg0) const;
		JString toString() const;
		void whitespaceChars(jint arg0, jint arg1) const;
		void wordChars(jint arg0, jint arg1) const;
	};
} // namespace java::io

