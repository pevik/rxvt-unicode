// all resource indices, used by rxvt.h anf rxvtperl.xs

  def (display_name)
  def (term_name)
  def (iconName)
  def (geometry)
  def (reverseVideo)
  def (color)
  reserve (color, NRS_COLORS)
  def (font)
#if ENABLE_STYLES
  def (boldFont)
  def (italicFont)
  def (boldItalicFont)
  def (intensityStyles)
#endif
  def (name)
  def (title)
#if defined (XPM_BACKGROUND) || (MENUBAR_MAX)
  def (path)
#endif
#ifdef XPM_BACKGROUND
  def (backgroundPixmap)
#endif
#if (MENUBAR_MAX)
  def (menu)
#endif
  def (loginShell)
  def (jumpScroll)
#ifdef HAVE_SCROLLBARS
  def (scrollBar)
  def (scrollBar_right)
  def (scrollBar_floating)
  def (scrollBar_align)
  def (scrollstyle)
  def (scrollBar_thickness)
#endif
  def (scrollTtyOutput)
  def (scrollTtyKeypress)
  def (scrollWithBuffer)
  def (saveLines)
  def (utmpInhibit)
  def (visualBell)
#if ! defined(NO_MAPALERT) && defined(MAPALERT_OPTION)
  def (mapAlert)
#endif
#ifdef META8_OPTION
  def (meta8)
#endif
#ifdef MOUSE_WHEEL
  def (mouseWheelScrollPage)
#endif
#ifndef NO_BACKSPACE_KEY
  def (backspace_key)
#endif
#ifndef NO_DELETE_KEY
  def (delete_key)
#endif
  def (selectstyle)
#ifdef PRINTPIPE
  def (print_pipe)
#endif
#ifdef USE_XIM
  def (preeditType)
  def (inputMethod)
#endif
#ifdef TRANSPARENT
  def (transparent)
  def (transparent_all)
#endif
#if ENABLE_FRILLS
  def (transient_for)
  def (pty_fd)
  def (hold)
  def (ext_bwidth)
  def (int_bwidth)
  def (borderLess)
  def (lineSpace)
  def (cursorUnderline)
  def (skipBuiltinGlyphs)
#endif
#if CURSOR_BLINK
  def (cursorBlink)
#endif
#if ENABLE_XEMBED
  def (embed)
#endif
  def (cutchars)
  def (modifier)
  def (answerbackstring)
  def (tripleclickwords)
  def (insecure)
  def (pointerBlank)
  def (pointerBlankDelay)
  def (imLocale)
  def (imFont)
  def (pastableTabs)
#ifndef NO_SECONDARY_SCREEN
  def (secondaryScreen)
  def (secondaryScroll)
#endif
#ifdef OFF_FOCUS_FADING
  def (fade)
#endif
#ifdef TINTING
  def (shade)
#endif
#if ENABLE_PERL
  def (perl_eval)
  def (perl_ext_1)
  def (perl_ext_2)
  def (perl_lib)
#endif
