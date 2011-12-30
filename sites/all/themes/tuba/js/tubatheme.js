(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    
    //HIDE LATEST MENU CONTENT
    $("#block-forum-new .content, #block-views-begivenheder-block .content").hide();

    //FORUM Foldout
    $("#block-forum-new h2").toggle(
      function(){
        $("#block-forum-new .content").hide();
        $("#block-forum-new .content").show();
      },
        function(){
        $("#block-forum-new .content").hide();
      }
    )
    
    //BREVKASSE Foldout
    $("#block-views-begivenheder-block h2").toggle(
      function(){
        $("#block-views-begivenheder-block .content").hide();
        $("#block-views-begivenheder-block .content").show();
      },
        function(){
        $("#block-views-begivenheder-block .content").hide();
      }
    )

  }
};
})(jQuery);