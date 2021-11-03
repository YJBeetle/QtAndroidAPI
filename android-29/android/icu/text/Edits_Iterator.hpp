#pragma once

#include "../../../JObject.hpp"

class JCharArray;
class JString;

namespace android::icu::text
{
	class Edits_Iterator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Edits_Iterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Edits_Iterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint destinationIndex();
		jint destinationIndexFromSourceIndex(jint arg0);
		jboolean findDestinationIndex(jint arg0);
		jboolean findSourceIndex(jint arg0);
		jboolean hasChange();
		jint newLength();
		jboolean next();
		jint oldLength();
		jint replacementIndex();
		jint sourceIndex();
		jint sourceIndexFromDestinationIndex(jint arg0);
		JString toString();
	};
} // namespace android::icu::text

